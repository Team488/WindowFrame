#!c:\python37\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'examples-rclpy-executors==0.7.4','console_scripts','talker'
__requires__ = 'examples-rclpy-executors==0.7.4'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('examples-rclpy-executors==0.7.4', 'console_scripts', 'talker')()
    )
