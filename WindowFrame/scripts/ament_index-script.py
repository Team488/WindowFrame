#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'ament-index-python==0.7.2','console_scripts','ament_index'
__requires__ = 'ament-index-python==0.7.2'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('ament-index-python==0.7.2', 'console_scripts', 'ament_index')()
    )
