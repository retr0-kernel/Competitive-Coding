

char * convert(char * s, int numRows){
    
    int len = strlen(s);
    char *ret = (char *)malloc(len + 1);
    int i, j;
    j = 0; 
    
    
    if (numRows == 1) {
        while (j < len) {
            ret[j] = s[j];
            j++;
        }
        ret[len] = '\0';
        return ret;
    }

    int t = (numRows - 1) * 2;
    int shift, offset;
    
    for (i = 0; i < numRows; i++) {
        offset = 0;
        shift = (numRows - i - 1) * 2;
        while (j < len && i + offset < len) {
            ret[j] = s[i + offset];
            j++;

            if (shift == 0) {
                shift = t;
            }

            offset += shift;

            if (shift != t) {
                shift = t - shift;
            }
        }
    }

    ret[len] = '\0';

    return ret;
}
