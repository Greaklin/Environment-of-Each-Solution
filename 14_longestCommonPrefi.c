//2022年01月16日更新，还没测试好测试环境，刚好可以借这个题来练一下指针数组和C语言的字符串处理，慢慢来，加油
char * longestCommonPrefix(char ** strs, int strsSize){
    unsigned int n = strlen(strs[1]);//把字符串数组的第一个子串内容当作最长前缀的初始项,之后遍历后续子串，拿第一个字符串去进行匹配
    char* zc = malloc(sizeof(char)*(n+1));
    int i =0;
    for(; i<n; i++)
    zc[i] = (strs[1])[i];//循环主体，逐个比较字符串内各元素
    zc[i] = '\0';
    return zc;
}

int main(){
    char* arr1 = 'abcdefg';
    char* arr2 = 'hijklmn';
    char* arr3 = 'opqest';
    char* arr[3] = {&arr1, &arr2, &arr3};
    char* zc = longestCommonPrefix(arr,3);
    printf("a= %s, 2= %s,3= %s,zc = %s\n",arr1,arr2,arr3,zc);
    return 0;
}
    
