docker build -t clashce .
docker run --name clashComp clashce
docker cp clashComp:/app/bin/ .
docker rm clashComp