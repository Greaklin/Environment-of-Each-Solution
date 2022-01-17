//2022年01月17日更新，更新字符串型数组指针的写法，纠正了子函数内字符串数组指针的引用
char * longestCommonPrefix(char ** strs, int strsSize){
    unsigned int n = strlen(strs[0]);//把字符串数组的第一个子串内容当作最长前缀的初始项,之后遍历后续子串，拿第一个字符串去进行匹配、
    printf("n = %d\n",n);
    char* zc = malloc(sizeof(char)*(n+1));
    int i =0;
    for(; i<n; i++)
    zc[i] = (strs[1])[i];//循环主体，逐个比较字符串内各元素
    zc[i] = '\0';
    return zc;
}

int main(){
    char* arr1 = "abcdefg";
    char* arr2 = "hijklm";
    char* arr3 = "opqes";//字符串在C中的声明必须得用双引号
    char* arr[3] = {arr1, arr2, arr3};//字符串数组指针声名
    char* zc = longestCommonPrefix(arr,3);
    printf("1= %s, 2= %s,3= %s \n zc = %s\n",arr1,arr2,arr3,zc);
    return 0;
}
    


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
    
