#!/usr/bin/python3
import unittest
import ctypes

class TestInterfaceFunctions(unittest.TestCase):

        def setUp(self):
                self.libcprogen_core = ctypes.cdll.LoadLibrary('../build/libcprogen_core.so')

        def test_add(self):
                self.assertEqual(self.libcprogen_core.add(2, 2), 4)

if __name__ == '__main__':
        unittest.main()
