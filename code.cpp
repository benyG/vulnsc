plural (char *str, char* plu){
 char *buf;
 plu[0] = '\0';
 if (str == 0) return
 int n = strlen(str);
 if (n == 0) return;
 buf = malloc(n);
 char last = str(n-1);
 
if (last == 's') // already a plural
  strcpy (buf, str);
else if (last == 'h') // plural with h =>
 sprintf(buf, "%ses", str);
else Il normal plural
 sprintf(buf, "%ss", str);
 strcpy(plu, buf);
 free (buf);
}

report-print (char  str, int n) {
 char item_plural [256];
plural (str, item_plural);
printf(blable %d, %s, n, item_plural);
}
