
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_tls {int dummy; } ;
struct iovec {size_t iov_len; int iov_base; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(struct vlc_tls *VAR_2, struct iovec *VAR_3,
                             unsigned VAR_4)
{
    size_t VAR_5 = 0;

    while (VAR_4 > 0)
    {
        size_t VAR_6 = VAR_3->iov_len;
        if (VAR_6 > VAR_1)
            VAR_6 = VAR_1;

        if (VAR_6 > 0)
        {
            FUNC_0(VAR_3->iov_base, VAR_0, VAR_6);
            VAR_0 += VAR_6;
            VAR_1 -= VAR_6;
            VAR_5 += VAR_6;
        }

        VAR_3++;
        VAR_4--;
    }
    (void) VAR_2;
    return VAR_5;
}
