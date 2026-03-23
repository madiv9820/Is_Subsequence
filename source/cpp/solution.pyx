from libcpp.string cimport string
from libcpp cimport bool

cdef extern from 'solution.hpp':
    cdef cppclass Solution:
        Solution() except +
        bool isSubsequence(string s, string t)

cdef class cppSolution:
    cdef Solution *ptr
    
    def __init__(self) -> None:
        self.ptr = new Solution()
    
    def __dealloc__(self) -> None:
        del self.ptr

    def cpp_isSubsequence(self, s, t):
        cdef string cpp_s = s.encode("utf-8")
        cdef string cpp_t = t.encode("utf-8")

        cdef bool cpp_result = self.ptr.isSubsequence(cpp_s, cpp_t)
        return cpp_result