
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tgl_peer_id_t ;


 int FUNC_0 (char*,char*,unsigned int) ;

char *FUNC_1 (tgl_peer_id_t VAR_0) {
  static char VAR_1[2 * sizeof (tgl_peer_id_t) + 2];
  VAR_1[0] = '$';

  unsigned char *VAR_2 = (void *)&VAR_0;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < (int)sizeof (tgl_peer_id_t); VAR_3++) {
    FUNC_0 (VAR_1 + 1 + 2 * VAR_3, "%02x", (unsigned)VAR_2[VAR_3]);
  }
  return VAR_1;
}
