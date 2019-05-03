#!/usr/bin/python3
import unittest
import ctypes
import platform

class TestInterfaceFunctions(unittest.TestCase):

        def setUp(self):
                lib_path = "../build/libcprogen_core."
                if platform.system() == 'Linux':
                        lib_path += "so"
                elif platform.system() == 'Darwin':
                        lib_path += "dylib"
                else:
                        raise Exception('Not supported platform')

                self.libcprogen_core = ctypes.cdll.LoadLibrary(lib_path)

        def test_add(self):
                self.assertEqual(self.libcprogen_core.add(2, 2), 4)
        def test_sub(self):
                self.assertEqual(self.libcprogen_core.sub(2, 2), 0)

if __name__ == '__main__':
        unittest.main()
