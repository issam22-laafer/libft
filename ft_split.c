// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// #include <stdlib.h>
// #include <string.h>

// void count_length_word(const char *str, char c, char ***result, int *word_count) {
//     int str_len = strlen(str);
//     int word_start = 0;
//     int i = 0;

//     *result = (char **)malloc(sizeof(char *));
//     *word_count = 0;

//     while (i <= str_len) {
//         if (str[i] == c || str[i] == '\0') {
//             int word_length = i - word_start;
//             if (word_length > 0) {
//                 (*result)[*word_count] = (char *)malloc(word_length + 1);
//                 strncpy((*result)[*word_count], &str[word_start], word_length);
//                 (*result)[*word_count][word_length] = '\0';
//                 (*word_count)++;
//                 *result = (char **)realloc(*result, (*word_count + 1) * sizeof(char *));
//             }
//             word_start = i + 1;
//         }
//         i++;
//     }
// }

// int ft_count_w(char *str, char c) {
//     int i = 0;
//     // int len = strlen(str);
//     int count = 0;

//     if (!str || !c)
//         return 0;
//     if (str[0] != c)
//         count++;
//     while (str[i] != '\0') {
//         if (str[i] != c && str[i - 1] == c)
//             count++;
//         i++;
//     }
//     return count;
// }

// char **ft_split(char const *s, char c) {
//     char **ptr;
//     int i;

//     ptr = (char **)malloc((ft_count_w((char*)s, c) + 1) * sizeof(char *));
//     if (!ptr || !s)
//         return NULL;

//     count_length_word(s, c, &ptr, &i);

//     return ptr;
// }

// // int main() {
// //     char input_string[] = "This,,     is a  ,,  sample string separated by,     spaces.,     ";
// //     char separator = ',';
// //     char **words = ft_split(input_string, separator);

// //     if (words) {
// //         for (int i = 0; words[i] != NULL; i++) {
// //             printf("Word %d: %s\n", i, words[i]);
// //             free(words[i]); // Free memory for each word
// //         }
// //         free(words); // Free the array of pointers
// //     }

// //     return 0;
// // }



// void count_word(char *s, char c)
// {
//     int i;
//     int count;

//     i = 0;
//     count = 0;
//     if (s[i] != c)
//         count ++;
//     if(!s || !c)
//         return 0;
//     while (s[i] != '\0')
//     {
//         if(s[i] != cc && s[i - 1]==c)
//             count++;
//         i++;
//     }
// }

// void all_array_w(char *s, char c, ***ptr,wc)
// {
//     int i;
//     int word_length;
//     int j;
//     int ws;

    
// }