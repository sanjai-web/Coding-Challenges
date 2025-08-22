#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle) {
     char *pos = strstr(haystack, needle);  
      printf("Found substring at: %s\n", pos); 
    if (pos != NULL) {
        printf("Found substring at: %s\n", pos);  
        return pos - haystack;  
    }
    
    return -1;  // Return -1 if not found
}

int main() {
    char haystack[] = "sadbutsad";
    char needle[] = "sad";
    
    int result = strStr(haystack, needle);
    printf("%d\n", result);  // Output: 0

    return 0;
}
