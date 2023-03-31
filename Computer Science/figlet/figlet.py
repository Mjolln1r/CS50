import sys
from sys import argv
import pyfiglet


if len(argv) < 4:
    txt = input("Input: ")
    figlet = pyfiglet.figlet_format(txt)
    print(f"Output:\n {figlet}")
    sys.exit(0)
else:
    sys.exit(1)
