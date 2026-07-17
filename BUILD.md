source .venv/bin/activate
python make.py build sam esp --env sck21_air

token is `xxxxx`

mqtt publish topic is
`device/sck/xxxxx/readings/raw`

run `deactivate` exit python
