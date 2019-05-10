#!/usr/bin/python3
import unittest
import ctypes
import platform

class TestInterfaceFunctions(unittest.TestCase):

        def setUp(self):
                lib_path = "./build/libmoderncpp."
                if platform.system() == 'Linux':
                        lib_path += "so"
                elif platform.system() == 'Darwin':
                        lib_path += "dylib"
                else:
                        raise Exception('Not supported platform')

                self.libmoderncpp = ctypes.cdll.LoadLibrary(lib_path)

        def test_add(self):
                self.assertEqual(self.libmoderncpp.add(2, 2), 4)
        def test_sub(self):
                self.assertEqual(self.libmoderncpp.sub(2, 2), 0)

if __name__ == '__main__':
        unittest.main()
