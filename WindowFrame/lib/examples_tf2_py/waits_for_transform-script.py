#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'examples-tf2-py==0.12.4','console_scripts','waits_for_transform'
__requires__ = 'examples-tf2-py==0.12.4'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('examples-tf2-py==0.12.4', 'console_scripts', 'waits_for_transform')()
    )
