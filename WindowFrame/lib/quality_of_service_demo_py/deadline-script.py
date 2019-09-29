#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'quality-of-service-demo-py==0.7.8','console_scripts','deadline'
__requires__ = 'quality-of-service-demo-py==0.7.8'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('quality-of-service-demo-py==0.7.8', 'console_scripts', 'deadline')()
    )
