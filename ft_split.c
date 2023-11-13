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