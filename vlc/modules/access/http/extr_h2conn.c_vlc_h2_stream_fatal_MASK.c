
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast32_t ;
struct vlc_h2_stream {int recv_end; int id; int conn; int recv_err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vlc_h2_stream *VAR_1, uint_fast32_t VAR_2)
{
    VAR_1->recv_end = 1;
    VAR_1->recv_err = VAR_0;
    return FUNC_0(VAR_1->conn, VAR_1->id, VAR_2);
}
