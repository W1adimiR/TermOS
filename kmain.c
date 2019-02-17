void kmain(void){
  const char *str = "Fuck you, bitch .!..";
  char *vidptr = (char*)0x000b8000;
  unsigned int i = 0x00;
  unsigned int j = 0x00;

  while(j < 80*25*2){
    vidptr[j] = ' ';
    vidptr[j+1] = 0x07;
    j += 2;
  }

  j = 0x00;

  while(str[j] != '\0'){
    vidptr[i] = str[j];
    vidptr[i+1] = 0x07;
    ++j;
    i += 2;
  }
  return;
}
