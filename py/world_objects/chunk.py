from numpy.ma.core import append
from settings import *

from py.meshes.chunk_mesh import ChunkMesh


class Chunk:
    def __init__(self, app):
        self.app = app
        self.voxels: np.array = self.build_voxels()
        self.mesh: ChunkMesh = None
        self.build_mesh()

    def build_mesh(self):
        self.mesh = ChunkMesh(self)

    def render(self):
        self.mesh.render()

    def build_voxels(self):
        # empty chunk
        # voxels consists of voxel ids 0...255 and their value showing voxel type where voxel value 0 is empty space
        voxels = np.zeros(CHUNK_VOL, dtype=np.uint8)

        # fill chunk
        for x in range(CHUNK_SIZE):
            for z in range(CHUNK_SIZE):
                for y in range(CHUNK_SIZE):
                    # we give here all voxels a value of 1
                    voxels[x + CHUNK_SIZE * z + CHUNK_AREA * y] = x + y + z
        return voxels
