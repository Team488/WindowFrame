#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'tracetools-trace==0.2.10','console_scripts','trace'
__requires__ = 'tracetools-trace==0.2.10'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('tracetools-trace==0.2.10', 'console_scripts', 'trace')()
    )
