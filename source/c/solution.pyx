from libc.stdlib cimport malloc, free
from libc.string cimport strcpy

# 🔗 Declare external C function from header file
cdef extern from 'solution.h':
    bint isSubsequence(char* s, char* t)   # 🔁 C function to check subsequence

# 🧩 Cython wrapper class to interact with C implementation
cdef class cSolution:
    def c_isSubsequence(self, s, t):
        """
        🔍 Wrapper function to call C isSubsequence
        
        Steps:
        1. Convert Python strings → UTF-8 encoded bytes
        2. Allocate memory for C-style strings (char*)
        3. Copy data into allocated memory
        4. Call C function
        5. Free allocated memory
        6. Return result to Python
        
        Args:
            s (str): Candidate subsequence string
            t (str): Target string
        
        Returns:
            bool: True if s is a subsequence of t, else False
        """

        # 🔤 Convert Python strings → UTF-8 encoded bytes
        # Required because C works with raw byte arrays (char*)
        cdef bytes py_s_bytes = s.encode("utf-8")
        cdef bytes py_t_bytes = t.encode("utf-8")

        # 📌 Declare C-style string pointers
        cdef char* c_s
        cdef char* c_t

        # 📌 Variable to store result from C function
        cdef bint cpp_result

        # 🚀 Allocate memory for C strings (+1 for null terminator '\0')
        c_s = <char*> malloc((len(py_s_bytes) + 1) * sizeof(char))
        c_t = <char*> malloc((len(py_t_bytes) + 1) * sizeof(char))

        # ⚠️ Copy Python bytes → C strings
        # strcpy automatically appends null terminator
        strcpy(c_s, py_s_bytes)
        strcpy(c_t, py_t_bytes)

        # ⚡ Call C function
        cpp_result = isSubsequence(c_s, c_t)

        # 🧹 Free allocated memory to prevent memory leaks
        free(c_s)
        free(c_t)

        # 🔁 Convert result to Python bool and return
        return bool(cpp_result)