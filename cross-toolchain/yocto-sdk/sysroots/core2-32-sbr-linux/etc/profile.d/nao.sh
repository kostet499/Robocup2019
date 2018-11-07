# This is a profile for user "nao". It should be installed to ~nao/.profile,
# but for technical reasons it can not be installed there, so we put it here
# instead.

if [ "$(id -un)" != "nao" ]; then
  return
fi

eval "export $(xargs < /etc/conf.d/naoqi)"
