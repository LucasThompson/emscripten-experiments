all: Name.js InitialedGreeter.js FullNameGreeter.js

Name.js: 
	em++ -O3 --bind \
	--memory-init-file 0 \
	-s MODULARIZE=1 \
	-s EXPORT_NAME="'Name'" \
	-s MAIN_MODULE=1 \
	./src/NameBindings.cpp \
	-o ./test/Name.js 
	echo "module.exports=Name;" >> ./test/Name.js

InitialedGreeter.js:
	em++ -std=c++11 -O3 \
	./src/InitialedGreeter.cpp \
	-s SIDE_MODULE=1 \
	-s EXPORTED_FUNCTIONS="['_createInitialedGreeter']" \
	-o ./test/InitialedGreeter.js

FullNameGreeter.js:
	em++ -std=c++11 -O3 \
	./src/FullNameGreeter.cpp \
	-s SIDE_MODULE=1 \
	-s EXPORTED_FUNCTIONS="['_createFullNameGreeter']" \
	-o ./test/FullNameGreeter.js

clean:
	rm -f ./test/Name.js ./test/InitialedGreeter.js ./test/FullNameGreeter.js