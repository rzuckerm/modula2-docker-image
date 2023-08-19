#!/bin/sh
DOCKER_IMAGE=$1
DOCKER_RUN="docker run --rm -i -v $(pwd):/local -w /local ${DOCKER_IMAGE}"

CMD="gm2 -fiso hello_world.mod -o hello_world && ./hello_world"
RESULT="$(${DOCKER_RUN} sh -c "${CMD}")"
rm -f hello_world hello_world*.o
echo "${RESULT}"
if [ "${RESULT}" = "Hello, world!" ]
then
    echo "PASSED"
else
    echo "FAILED"
    exit 1
fi
