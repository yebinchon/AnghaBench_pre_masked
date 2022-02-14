
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ gnutls_transport_ptr_t ;
typedef int giovec_t ;
typedef int DnsStream ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,struct iovec const*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(gnutls_transport_ptr_t VAR_2, const giovec_t *VAR_3, int VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2);

        VAR_5 = FUNC_1((DnsStream*) VAR_2, (const struct iovec*) VAR_3, VAR_4, VAR_0);
        if (VAR_5 < 0) {
                VAR_1 = -VAR_5;
                return -1;
        }

        return VAR_5;
}
