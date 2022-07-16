all:
	pio -f -c vim run

upload:
	pio -f -c vim run --target upload

start: upload
	pio device monitor

clean:
	pio -f -c vim run --target clean

program:
	pio -f -c vim run --target program

uploadfs:
	pio -f -c vim run --target uploadfs

update:
	pio -f -c vim update

refresh:
	pio run -t compiledb
