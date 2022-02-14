
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {size_t recv_buf_len; int recv_buf; } ;
typedef TYPE_1__ MockConnection ;
typedef int Connection ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;

ssize_t
FUNC_1(Connection *VAR_1, char *VAR_2, size_t VAR_3)
{
 MockConnection *VAR_4 = (MockConnection *) VAR_1;

 if (VAR_3 > VAR_0)
  return -1;

 FUNC_0(VAR_4->recv_buf, VAR_2, VAR_3);
 VAR_4->recv_buf_len = VAR_3;
 return VAR_4->recv_buf_len;
}
