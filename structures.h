typedef struct {
	char drawFlag;
	char newlineFlag;
	char scrollFlag;
	unsigned char x;
	unsigned char y;
	unsigned char width;
	unsigned char height;
	unsigned char cursorX;
	unsigned char cursorY;
	struct textbox_t* self;
	unsigned char *charBuffer;
	unsigned char *scrollBuffer;
} textbox_t;
