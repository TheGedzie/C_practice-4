#include <stdio.h>
#include <stdint.h>

int main(){
  uint16_t i, r; 
  
  scanf("%hu%hu", &i, &r);
  
  uint32_t calculate = (uint32_t)i * r; 
  printf("Результат: %u\n", calculate);

  printf("Размер типа uint16_t: %llu байта\n", (unsigned long long)sizeof(uint16_t));
  printf("Размер типа uint32_t: %llu байта\n", (unsigned long long)sizeof(uint32_t));

  return 0; 
}
