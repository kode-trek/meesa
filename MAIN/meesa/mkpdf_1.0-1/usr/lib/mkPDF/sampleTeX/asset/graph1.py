import networkx as nx
import matplotlib.pyplot as plt
G = nx.DiGraph()
G.add_nodes_from(['foo', 'bar', 'baz'])
G.add_edges_from([('foo', 'bar'), ('foo', 'baz'), ('bar', 'baz')])
plt.plot()
pos = nx.circular_layout(G)
nx.draw(
	G, pos, with_labels=True, font_weight='bold', node_size=3200,
	node_color='lightblue', font_size=32, arrowsize=32
	)
plt.savefig('nx_fig1.pdf')
