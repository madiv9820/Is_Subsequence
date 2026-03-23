from libcpp.string cimport string
from libcpp cimport bool

# 🔗 Declare external C++ class and method from header file
cdef extern from 'solution.hpp':
    cdef cppclass Solution:
        Solution() except +                          # ⚙️ Constructor (handles C++ exceptions safely)
        bool isSubsequence(string s, string t)       # 🔁 Function to check if s is a subsequence of t

# 🧩 Cython wrapper class to interact with C++ Solution
cdef class cppSolution:
    cdef Solution *ptr                              # 📌 Pointer to C++ Solution object
    
    def __init__(self) -> None:
        """
        🚀 Initialize C++ object
        
        Allocates memory for the Solution class instance.
        This allows us to call C++ methods from Python.
        """
        self.ptr = new Solution()
    
    def __dealloc__(self) -> None:
        """
        🧹 Destructor
        
        Frees allocated memory to prevent memory leaks.
        Automatically called when the Python object is garbage collected.
        """
        del self.ptr

    def cpp_isSubsequence(self, s, t):
        """
        🔍 Wrapper function to call C++ isSubsequence
        
        Steps:
        1. Convert Python strings → C++ std::string
        2. Call C++ function using pointer
        3. Return boolean result back to Python
        
        Args:
            s (str): Candidate subsequence string
            t (str): Target string
        
        Returns:
            bool: True if s is a subsequence of t, else False
        """
        
        # 🔤 Convert Python string → C++ std::string (UTF-8 encoding)
        cdef string cpp_s = s.encode("utf-8")
        cdef string cpp_t = t.encode("utf-8")

        # ⚡ Call C++ function via pointer
        # Using 'libcpp.bool' ensures correct conversion to Python bool
        cdef bool cpp_result = self.ptr.isSubsequence(cpp_s, cpp_t)

        # 🔁 Return result to Python layer (auto-converted to True/False)
        return cpp_result