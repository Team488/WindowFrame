#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'rqt-graph==1.0.0','console_scripts','rqt_graph'
__requires__ = 'rqt-graph==1.0.0'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('rqt-graph==1.0.0', 'console_scripts', 'rqt_graph')()
    )