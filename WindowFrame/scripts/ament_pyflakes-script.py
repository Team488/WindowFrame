#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'ament-pyflakes==0.7.9','console_scripts','ament_pyflakes'
__requires__ = 'ament-pyflakes==0.7.9'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('ament-pyflakes==0.7.9', 'console_scripts', 'ament_pyflakes')()
    )
