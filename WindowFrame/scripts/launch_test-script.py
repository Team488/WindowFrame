#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'launch-testing==0.8.6','console_scripts','launch_test'
__requires__ = 'launch-testing==0.8.6'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('launch-testing==0.8.6', 'console_scripts', 'launch_test')()
    )