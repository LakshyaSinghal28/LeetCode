bool rotateString(char* s, char* goal) {
 
char a[250];

if(strlen(s)!=strlen(goal)){
    return false;
}

strcpy(a,s);
strcat(a,s);

if(strstr(a,goal)){
    return true;
}
    else{
        return false;
    }
}