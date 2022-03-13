import os
import sys

print("test")
if __name__ == "__main__":
    print(os.getcwd())
    args = sys.argv
    os.system(".\\output.exe {}".format(args[1]))