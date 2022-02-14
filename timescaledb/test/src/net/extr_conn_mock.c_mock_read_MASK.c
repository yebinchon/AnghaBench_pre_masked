
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ recv_buf_offset; scalar_t__ recv_buf_len; size_t recv_buf; } ;
typedef TYPE_1__ MockConnection ;
typedef int Connection ;


 int FUNC_0 (char*,size_t,size_t) ;
 size_t FUNC_1 () ;

__attribute__((used)) static ssize_t
FUNC_2(Connection *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 size_t VAR_4 = VAR_2;
 MockConnection *VAR_5 = (MockConnection *) VAR_0;

 if (VAR_5->recv_buf_offset >= VAR_5->recv_buf_len)
  return 0;

 if (VAR_4 >= VAR_5->recv_buf_len - VAR_5->recv_buf_offset)
  VAR_4 = VAR_5->recv_buf_len - VAR_5->recv_buf_offset;


 while (VAR_3 == 0)
 {
  VAR_3 = FUNC_1() % (VAR_4 + 1);
 }
 FUNC_0(VAR_1, VAR_5->recv_buf + VAR_5->recv_buf_offset, VAR_3);
 VAR_5->recv_buf_offset += VAR_3;

 return VAR_3;
}
