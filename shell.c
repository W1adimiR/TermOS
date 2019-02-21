extern char *keyboard_input;
extern char input_pos;
extern void kprint(const char *str);

int strcmp(char *str1, char *str2){
  int diff = 0;
  kprint("Break");
  for(int i = 0; i < sizeof(str1); i++){
    if(str1[i] != str2[i]){
      diff++;
    }
    kprint(str1[i]); kprint(str2[i]);
    if(str2[i] == '\0'){
      return diff;
    }
  }
  return diff;
}

void print_shell_promt(void){
  const char *promt = "TermOS:> ";
  kprint(promt);
}

void shell_run(void){
  do{
    print_shell_promt();
    while(keyboard_input[input_pos] != '\0');
    // const char *command = "hui";
    // kprint(command);
    // if(strcmp(keyboard_input, command) == 0){
    //   kprint("I love too pinat ix\n");
    // }else{
    //   kprint(keyboard_input);
    // }
  }while(1);
}
