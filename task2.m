function f = task102 ()

  function y = f(x)
    y = x.^2- 2;
  end
  a = 1;
  b = 2;
  e = 0.000001;
  A = [];

  while (b - a) / 2 > e
      c = (a + b) / 2;
      A = [A; c];
      if f (c) == 0
        break;
      elseif f(a) * f(c) < 0
        b = c;
      else f (b) * f(c) < 0
        a = c;
      end
    end
  fprintf ('%f\n', A (end));

  x = linspace(1, 2, 100);
  y = f(x);
  plot (x, y, 'b');
  grid on;
  hold on;
  plot(A, f(A), 'rd');
  xlabel('Values of x');
  ylabel('Function values');
  title('Bisection Method');
  legend('Functional values ', 'Roots');


endfunction

