#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'action-tutorials-py==0.8.4','console_scripts','fibonacci_action_client'
__requires__ = 'action-tutorials-py==0.8.4'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('action-tutorials-py==0.8.4', 'console_scripts', 'fibonacci_action_client')()
    )
