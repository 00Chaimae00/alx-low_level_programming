section          .text
        extern    printf
	global   main
main:
	mov   edi, format
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
section          .data
        msg db 'Hello, Helberton', 0xa, 0
