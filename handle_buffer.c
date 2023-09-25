#include "main.h"

#define BUFFER_SIZE 1024

/**
 * handle_buffer - Add a character to the buffer and handle buffer overflow
 * @buf: The character buffer
 * @c: The character to add to the buffer
 * @ibuf: The current index in the buffer
 * Return: The updated index in the buffer
 */
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf)
{
if (ibuf >= BUFFER_SIZE - 1)
{
buf[ibuf] = '\0';
write(1, buf, ibuf);
ibuf = 0;
}

buf[ibuf] = c;
ibuf++;
return (ibuf);
}
