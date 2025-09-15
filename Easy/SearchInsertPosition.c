// Construir código da busca binária (Complexidade da busca binária é O(log n)):

int searchInsert(int* nums, int numsSize, int target) { 
    int inicio, meio, final;
    inicio = 0;
    final = numsSize-1;

    while (inicio <= final) {
        meio = (inicio + final) / 2;
        if (target < nums[meio]) { final = meio - 1; }
        else if (target > nums[meio]) { inicio = meio + 1; }
        else { return meio; }
    }
    return inicio;
}