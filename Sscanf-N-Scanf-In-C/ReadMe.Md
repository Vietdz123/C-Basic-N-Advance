> # I. Sscanf() trong C

> Hàm này sẽ đọc dữ liệu từ buffer, tách dữ liệu từ buffer đó và lưu vào trong các buffer con.

> - Ta có VD **basic-sscan.c**;  
> #include <stdio.h>
int main()
{
        char huy[30] ={0}, viet[30] = {0};
        char buffer[100] = "huyNgu va vietdz";
        sscanf(buffer,"%s va %s", huy, viet);
        printf("Data: %s va %s\n", huy, viet);
        return 0;
}
> - **Kết quả:** Data: huyNgu va vietdz

> - Ta có VD ***advance-sscanf.c***;  
> #include <stdio.h>
int main()
{
        char huy[30] ={0}, viet[30] = {0}, linh[30] = {0};
        char buffer[100] = "huyNgu nhu bo. va          vietdz vl, linhngu";
        sscanf(buffer,"%[a-zA-Z ]. va  %[^,],%s", huy, viet, linh);
        printf("Data: %s va %s va %s\n", huy, viet, linh);
        return 0;
}
> - **Kết quả:**: Data: huyNgu nhu bo va vietdz vl va linhngu

> # ***Chú ý quan trọng:***:
> - **%[a-zA-Z ]**: Sẽ đọc tất cả kí tự từ a-z và A-Z và có kí tự space trong buffer buffer và lưu vào bufer nhỏ tương ứng.
>   - Như trong VD: biến *huy* bằng *huyNgu nhu bo*.
>   - Nếu sử dụng %s: thì chỉ lưu được huyNgu, đến khoảng trắng sẽ ko đọc nữa.
>
> - **%[^,]**: Sẽ đọc mọi kí tự ngoại trừ dấu **,**
>
> - Dù có bao nhiêu khoảng trắng và có sử dụng chấp nhận cả kí tự "cách", nhưng data chỉ được đọc từ kí tự khác kí tự "cách".

# II. Scanf() trong C

> Ngoài cách thông thường như scanf("%d", abc); thì ta có 1 cách nâng cao hơn.

> - Ta có VD ***advance-sscanf.c***; 
> #include <stdio.h>
int main()
{
        char huy[30] ={0}, viet[30] = {0};
        char buffer[100] = "huyNgu va vietdz";
        printf("Enter Data to parse: ");
        scanf("%s %s", huy, viet);
        printf("Data: %s va %s\n", huy, viet);
        return 0;
}
>
> **Kết quả:** Enter Data to parse: vietdz huyngu
> Data: vietdz va huyngu
