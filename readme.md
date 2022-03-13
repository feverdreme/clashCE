# ClashCE

This is a clone of clash royale to the TI-84 PCE calculator, which supports two player mode through a USB cable. Main project folder is in [clashCE](/clashCE/src/)

## Building binary

Requirements:

- Have docker installed

Option 1:

Run these lines

```bash
docker build -t clashce .
docker run --name clashComp clashce
docker cp clashComp:/app/bin/ bin/
docker rm clashComp
```

Option 2:

Run the bash script

```bash
bash dockerbuild.sh
```