function f=task101 ()
  A=input("Matrix A:");
  B=input("Matrix B:");
  MaxValueOfA=max(max(A));
  fprintf("Maximum value of A : %d\n",MaxValueOfA);

  if size(A, 2) == size(B, 1)
    % Matrix multiplication is possible
    M = A * B;
    fprintf("Multiplication:\n");
    disp(M);
else
    fprintf("Matrix multiplication is not possible.\n");
end



endfunction
