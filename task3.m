function f = task103 (input1, input2)

  function y = f(x)
    y = x.^2 - 2;
  end
  a = 1;
  b = 2;
  e = 0.000001;
  A = [];

  while (b - a ) / 2 > e
      c = (a * f(b) - b * f(a)) / (f(b) - f(a));
      A =[A; c];
      if f (c) == 0
        break;
      elseif f(a) * f(c) < 0
        b = c;
      else f(b) * f(c) < 0
        a = c;
      end
    end
   fprintf ('%f\n', A (end));


  x = linspace (1, 2, 50);
  y = f(x);
  plot (x, y, 'g');
  grid on;
  hold on;
  plot(A, f(A), 'rd');
  xlabel('Values of x');
  ylabel('Functional values');
  title('False-Position Method');
  legend('Functional values ', 'Roots');


endfunction

