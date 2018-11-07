#!/bin/sh
# Only keep the last 10 dumps

cd /var/lib/minidump
ls -tr | head -n -10 | xargs rm -f
