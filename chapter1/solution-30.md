# Problem
A portable operating system is one that can be ported from one system architecture to another without any modification. Explain why it is infeasible to build an operating system that is completely portable. Describe two high-level layers that you will have in designing an operating system that is highly portable.

# Solution
Two different system architectures have different instruction sets, so program written for one architecture will not work for another architecture.

Two layers:

- The interfaces provided by device drivers should be uniform across two system architectures.
- Virtual instruction sets built on top of two different system architectures.

