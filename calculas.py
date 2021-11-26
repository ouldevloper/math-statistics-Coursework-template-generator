from scipy.integrate import quad


def integrand(t, n, x):
    return np.exp(-x*t) / t**n


def expint(n, x):
    return quad(integrand, 1, np.inf, args=(n, x))[0]


vec_expint = np.vectorize(expint)

print(vec_expint)
