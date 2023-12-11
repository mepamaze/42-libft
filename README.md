# 42-libft
### This project aims to build a foundational library for all other 42 projects! Its functions are based on standard C libraries. (Libc and others)

---

## Project Requirements

| Status | Function Name | Function Description |
| :----: | :------------: | :------------------- |
| ✔️ | ***ft_isalpha***    | Checks for an alphabetic character |
| ✔️ | ***ft_isdigit***    | Checks for a digit (0 through 9) |
| ✔️ | ***ft_isalnum***    | Checks for an alphanumeric character |
| ✔️ | ***ft_isascii***    | Checks whether c fits into the ASCII character set |
| ✔️ | ***ft_isprint***    | Checks for any printable character including space |
| ✔️ | ***ft_strlen***     | Calculates the length of the string pointed to by s |
| ✔️ | ***ft_memset***     | Writes len bytes of value c (converted to an unsigned char) to the string b |
| ✔️ | ***ft_bzero***      | Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area |
| ✔️ | ***ft_memcpy***     | Copies n bytes from memory area src to memory area dest |
| ✔️ | ***ft_memmove***    | Copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest |
| ✔️ | ***ft_strlcpy***    | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result |
| ✔️ | ***ft_strlcat***    | Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result |
| ✔️ | ***ft_toupper***    | Converts a lower-case letter to the corresponding upper-case letter |
| ✔️ | ***ft_tolower***    | Converts an upper-case letter to the corresponding lower-case letter |
| ✔️ | ***ft_strchr***     | Returns a pointer to the first occurrence of the character c in the string s |
| ✔️ | ***ft_strrchr***    | Returns a pointer to the last occurrence of the character c in the string s |
| ✔️ | ***ft_strncmp***    | Compares the two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2 |
| ✔️ | ***ft_memchr***     | Scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char |
| ✔️ | ***ft_memcmp***     | Compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long |
| ✔️ | ***ft_strnstr***    | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched |
| ✔️ | ***ft_atoi***       | Converts the initial portion of the string pointed to by str to int representation |
| ✔️ | ***ft_calloc***     | Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero |
| ✔️ | ***ft_strdup***     | Returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc, and can be freed with free |
| ✔️ | ***ft_substr***     | Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’ |
| ✔️ | ***ft_strjoin***    | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’ |
| ✔️ | ***ft_strtrim***    | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string |
| ✔️ | ***ft_split***      | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer |
| ✔️ | ***ft_itoa***       | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled |
| ✔️ | ***ft_strmapi***    | Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’ |
| ✔️ | ***ft_putchar_fd*** | Outputs the character ’c’ to the given file descriptor |
| ✔️ | ***ft_putstr_fd***  | Outputs the string ’s’ to the given file descriptor |
| ✔️ | ***ft_putendl_fd*** | Outputs the string ’s’ to the given file descriptor, followed by a newline |
| ✔️ | ***ft_putnbr_fd***  | Outputs the integer ’n’ to the given file descriptor |

## Project Requirements (Bonus)

| Status | Function Name | Function Description |
| :----: | :-----------: | :------------------: |
| ✔️ | ***ft_lstnew***     | Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL |
|  | ***ft_lstadd_front*** | Adds the element ’new’ at the beginning of the list |
|  | ***ft_lstsize***    | Counts the number of elements in a list |
|  | ***ft_lstlast***    | Returns the last element of the list |
|  | ***ft_lstadd_back*** | Adds the element ’new’ at the end of the list |
|  | ***ft_lstdelone***  | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed |
|  | ***ft_lstclear***   | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL |
|  | ***ft_lstiter***    | Iterates the list ’lst’ and applies the function ’f’ to the content of each element |
|  | ***ft_lstmap***     | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed |
