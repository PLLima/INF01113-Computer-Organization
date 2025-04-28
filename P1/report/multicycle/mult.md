# Alterações para MULT
  - Inclusão de: 
    * Multiplicador;
    * Output extra (para MSByte);
    * Circuito para determinação de instrução MULT em execução;
    * Pino (flag) de isMult;
    * Extensão do circuito determinador de zero;
    Na ULA do MIPS.

  - Inclusão de registradores (MULT_HI e MULT_LO) e pinos de 32 bits (saída) para armazenar o resultado da instrução de MULT. `mflo` e `mfhi` não foram implementadas
